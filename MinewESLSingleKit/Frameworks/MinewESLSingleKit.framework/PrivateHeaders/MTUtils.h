//
//  MTUtils.h
//  MinewSensorKit
//
//  Created by Minewtech on 2019/8/6.
//  Copyright © 2019 Minewtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MTUtils : NSObject

+ (void)validateAdv:(NSData *)data RSSI:(NSNumber *)rssi completion:(void (^)(BOOL, BOOL))handler;

//+ (NSData *)verficationPassword:(NSString *)password;
//+ (NSData *)readHT;
//+ (NSData *)setUnit:(BOOL)isC;
//+ (NSData *)setHTThreshold:(int )h temp:(int )t;
//+ (NSData *)setHTWarning:(int )tmpH temL:(int )tempL humH:(int )humH humL:(int )humL;
//+ (NSData *)setHTSwicth;

+ (NSArray *)ota:(NSData *)data key:(NSString *)key;

//OTA 升级
+ (NSArray *)otaUpdateData:(NSData *)data key:(NSString *)key;

+ (NSData *)dataTransfromBigOrSmall:(NSData *)data;

+ (NSMutableData*)HexStringToData:(NSString*)str;

+ (NSString *)convertDataToHexStr:(NSData *)data;

@end

NS_ASSUME_NONNULL_END
