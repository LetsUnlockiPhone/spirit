/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewCellGrabber : UIControl {
@private
	UITableViewCell* _cell;
	CGPoint _downPoint;
}
+(id)grabberImage;
-(id)initWithFrame:(CGRect)frame tableViewCell:(id)cell;
-(void)drawRect:(CGRect)rect;
-(BOOL)shouldTrack;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)cancelTrackingWithEvent:(id)event;
@end

