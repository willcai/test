//
//  QRCodeNetworking.h
//  Pods
//
//  Created by Will on 15/11/2.
//
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSUInteger, SRCodeScanType)
{
    SRCodeScanTypeSendUserInfo,   // 发送用户信息
    SRCodeScanTypeConfirmLogin,   // 确认登录
};

@interface QRCodeNetworking : NSObject

/**
 * 二维码扫描登录:发送用户信息、确认登录
 * @param channelId 频道id
 * @param srcodeScanType 发送用户信息或确认登录
 * @param block success 是否成功
 */

+ (void)srcodeScan:(NSString *)channelId srcodeScanType:(SRCodeScanType)srcodeScanType  withBlock:(void (^)(BOOL success))block;




@end
