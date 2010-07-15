/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"


@interface UISwipeGestureRecognizer : UIGestureRecognizer {
@private
	double _maximumDuration;
	float _minimumHorizontalMovement;
	float _maximumHorizontalMovement;
	float _minimumVerticalMovement;
	float _maximumVerticalMovement;
	float _rateOfMinimumMovementDecay;
	float _rateOfMaximumMovementDecay;
	CGPoint _startLocation;
	CGPoint _startContentOffset;
	double _startTime;
	unsigned _trackingTouch : 1;
	unsigned _tableViewGesture : 1;
}
@property(assign, nonatomic) double maximumDuration;
@property(assign, nonatomic) float minimumHorizontalMovement;
@property(assign, nonatomic) float maximumHorizontalMovement;
@property(assign, nonatomic) float minimumVerticalMovement;
@property(assign, nonatomic) float maximumVerticalMovement;
@property(assign, nonatomic) float rateOfMinimumMovementDecay;
@property(assign, nonatomic) float rateOfMaximumMovementDecay;
@property(readonly, assign, nonatomic) CGPoint startPoint;
-(id)initWithTarget:(id)target action:(SEL)action;
-(BOOL)isTableViewGesture;
-(void)setTableViewGesture:(BOOL)gesture;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)reset;
@end

