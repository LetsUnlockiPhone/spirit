/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>

@class NSTimer, UIView;
@protocol UIAutoscrollContainer;

__attribute__((visibility("hidden")))
@interface UIAutoscroll : NSObject {
@private
	id m_target;
	CGPoint m_point;
	UIView<UIAutoscrollContainer>* m_scrollContainer;
	int m_directions;
	double m_repeatInterval;
	NSTimer* m_timer;
	int m_count;
	BOOL m_active;
}
@property(retain, nonatomic) id target;
@property(retain, nonatomic) UIView<UIAutoscrollContainer>* scrollContainer;
@property(assign, nonatomic) CGPoint point;
@property(assign, nonatomic) int directions;
@property(assign, nonatomic) double repeatInterval;
@property(assign, nonatomic) int count;
@property(assign, nonatomic) BOOL active;
-(void)dealloc;
-(BOOL)startAutoscroll:(id)autoscroll scrollContainer:(id)container point:(CGPoint)point directions:(int)directions repeatInterval:(double)interval;
-(void)invalidate;
-(void)timerFired:(id)fired;
@end

