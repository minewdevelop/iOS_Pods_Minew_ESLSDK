//
//  MTConnectionHandler+MTConnectionHandler_Extension.h
//  test1
//
//  Created by Minewtech on 2020/3/2.
//  Copyright © 2020 Minewtech. All rights reserved.
//
#import "MTConnectionHandler.h"
#import <CoreBluetooth/CoreBluetooth.h>

typedef NS_ENUM(NSUInteger, ConnectDataType) {
    ConnectDataTypeMac = 1,
    ConnectDataTypeConnection,
};

NS_ASSUME_NONNULL_BEGIN

@interface MTConnectionHandler ()

@property (nonatomic, assign) CBPeripheralState cbStatus;
@property (nonatomic, strong) CBPeripheral *peripheral;

@property (nonatomic, assign) BOOL writing;

@property (nonatomic, strong) CBCharacteristic *writeChar;

@property (nonatomic, copy) WriteCompletion writingBlock;

@property (nonatomic, copy) ReceiveCompletion receivingBlock;

@property (nonatomic, copy) ConnectionChangeCompletion connectionHandler;

/**
 current connection status.
 */
@property (nonatomic, assign) Connection connection;


- (BOOL)isSame:(CBPeripheral *)peri;

- (void)updateValues:(id)value forType:(ConnectDataType)type;

- (void)writeOTAData:(NSData *)data completion:(WriteCompletion)handler;


@end

NS_ASSUME_NONNULL_END
