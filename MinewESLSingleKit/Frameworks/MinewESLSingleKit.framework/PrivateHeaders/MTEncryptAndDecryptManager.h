//
//  MTEncryptAndDecryptManager.h
//  MinewSensorKit
//
//  Created by Minewtech on 2019/8/12.
//  Copyright © 2019 Minewtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MTEncryptAndDecryptManager : NSObject

+ (NSData *)AES_EAX:(uint8_t *)source tag:(uint8_t)tag random:(uint8_t)random size:(int)size key:(NSString *)key;

+ (NSData *)AES_CBC:(NSData *)data iv:(NSData *)iv decrypt:(BOOL)isdecrypt key:(NSString *)key;

+ (NSData *)AES_CMAC:(NSData *)randomData key:(NSString *)key;

+ (NSData *)reMix:(NSData *)data;

@end

NS_ASSUME_NONNULL_END
