/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface UIWebURLAction : NSObject {
}
+(id)sharedInstance;
+(BOOL)performDefaultActionForURL:(id)url withAllowedTypes:(unsigned)allowedTypes inFrame:(id)frame;
+(id)actionSheeForURL:(id)url withAllowedTypes:(unsigned)allowedTypes inFrame:(id)frame;
+(BOOL)performActionWithTag:(int)tag forURL:(id)url withAllowedTypes:(unsigned)allowedTypes forFrame:(id)frame inView:(id)view interactionDelegate:(id)delegate;
+(BOOL)shouldImmediatelyShowActionSheetForURL:(id)url;
-(void)dealloc;
-(BOOL)performDefaultActionForURL:(id)url withAllowedTypes:(unsigned)allowedTypes inFrame:(id)frame;
@end

