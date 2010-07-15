/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UICalloutBarOverlay : UIView {
@private
	UIImageView* m_hiArrow;
	CGRect m_arrowRect;
	float m_dividerOffsets[8];
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setDividerOffsets:(float*)offsets;
-(void)drawRect:(CGRect)rect;
-(void)setHighlighted:(BOOL)highlighted forFrame:(CGRect)frame;
@end

