/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>


@interface UIHardware : NSObject {
}
+(float)statusBarHeight;
+(void)_setStatusBarHeight:(float)height;
+(CGSize)mainScreenSize;
+(CGRect)fullScreenApplicationContentRect;
+(int)ringerState;
+(int)deviceOrientation:(BOOL)orientation;
+(BOOL)setSpeakerPhoneEnabled:(BOOL)enabled;
+(BOOL)isTTYEnabled;
+(CGSize)TVScreenSize;
+(float)TVHorizontalPixelScale;
+(BOOL)_TVOutStatus:(BOOL)status;
+(BOOL)TVOutCapableAndPreferred;
+(BOOL)TVOutCapable;
+(void)TVOutResetPreferred;
+(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
+(void)accessoryAvailabilityChanged;
+(id)deviceName;
+(id)localizedDeviceName;
+(void)_updateSystemSoundActiveStatus:(id)status;
+(void)_registerForSystemSounds:(id)systemSounds;
+(void)_unregisterForSystemSounds:(id)systemSounds;
+(void)_playSystemSound:(unsigned long)sound;
@end

