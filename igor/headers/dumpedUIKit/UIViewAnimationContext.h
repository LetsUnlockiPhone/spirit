/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIViewAnimationContext : NSObject {
@private
	NSArray* _viewAnimations;
	int _animationCount;
}
@property(retain, nonatomic) NSArray* viewAnimations;
@property(assign, nonatomic) int animationCount;
-(void)dealloc;
@end

