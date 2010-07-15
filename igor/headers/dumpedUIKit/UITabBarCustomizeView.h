/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UITabBarItem, UITabBar, UIImageView, UITabBarItemProxy, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UITabBarCustomizeView : UIView {
@private
	UITabBar* _tabBar;
	NSMutableArray* _proxies;
	NSMutableArray* _fixedItems;
	UITabBarItemProxy* _draggingProxy;
	UITabBarItem* _draggingItem;
	UIImageView* _dragImage;
	UIImageView* _replacementGlow;
	UITabBarItem* _replaceItem;
	CGPoint _startPoint;
	int _gridCount;
	float _gridOffset;
}
-(id)initWithFrame:(CGRect)frame;
-(void)setTabBar:(id)bar currentItems:(id)items availableItems:(id)items3;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)canHandleSwipes;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)adjustDragImageWithTouches:(id)touches withEvent:(id)event;
-(id)itemInTabBarWithTouches:(id)touches withEvent:(id)event;
-(void)tabBarTouchesBegan:(id)began withEvent:(id)event;
-(void)tabBarTouchesMoved:(id)moved withEvent:(id)event;
-(void)tabBarTouchesEnded:(id)ended withEvent:(id)event;
-(void)_finishTouchesEndedChangeAnimation:(id)animation finished:(id)finished context:(id)context;
@end

