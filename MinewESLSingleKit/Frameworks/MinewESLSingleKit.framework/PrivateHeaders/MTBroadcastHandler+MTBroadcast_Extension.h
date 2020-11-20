//
//  MTBroadcastHandler+MTBroadcast_Extension.h
//  test1
//
//  Created by Minewtech on 2020/3/2.
//  Copyright © 2020 Minewtech. All rights reserved.
//
#import "MTBroadcastHandler.h"
#import <CoreBluetooth/CBPeripheral.h>

typedef NS_ENUM(NSUInteger, DataType) {
    DataTypeName = 1,
    DataTypeMac,
    DataTypeRssi,
    DataTypeIdentifier,
    DataTypeFirmVersion,
    DataTypeHardwareVersion,
    DataTypeScreenInfo,
    DataTypeChipInfo,
    DataTypeTriggerType,
    DataTypeBatteryVoltage,
    DataTypeChipTemp,
    DataTypeImageId,
    DataTypeHeartbeat,
    DataTypeTagRssi,
    DataTypeErrorCode,
    
    // 设备触发帧
    DataTypeTriggerSource,
    DataTypeCall,
};

NS_ASSUME_NONNULL_BEGIN

@interface MTBroadcastHandler ()

@property (nonatomic, strong) CBPeripheral *peripheral;

- (void)updateValues:(id)value forType:(DataType)type;

@end

NS_ASSUME_NONNULL_END
