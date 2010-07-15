/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIBarButtonItem.h"
#import "UIBarItem.h"

@class UIView, UIToolbarButton, UIImage, NSString, NSSet;

@interface UIBarButtonItem : UIBarItem {
@private
	NSString* _title;
	NSSet* _possibleTitles;
	SEL _action;
	id _target;
	UIImage* _image;
	UIEdgeInsets _imageInsets;
	float _width;
	UIView* _view;
	int _tag;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned isMinibarView : 1;
	} _barButtonItemFlags;
}
@property(assign, nonatomic) SEL action;
@property(assign, nonatomic) id target;
@property(assign, nonatomic) int tag;
@property(retain, nonatomic) UIView* customView;
@property(copy, nonatomic) NSSet* possibleTitles;
@property(assign, nonatomic) float width;
@property(assign, nonatomic) int style;
-(id)init;
-(id)initWithImage:(id)image style:(int)style target:(id)target action:(SEL)action;
-(id)initWithTitle:(id)title style:(int)style target:(id)target action:(SEL)action;
-(id)initWithBarButtonSystemItem:(int)barButtonSystemItem target:(id)target action:(SEL)action;
-(id)initWithCustomView:(id)customView;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(void)setEnabled:(BOOL)enabled;
-(BOOL)isEnabled;
-(void)setTitle:(id)title;
-(id)title;
-(void)setImage:(id)image;
-(id)image;
-(void)setImageInsets:(UIEdgeInsets)insets;
-(UIEdgeInsets)imageInsets;
@end

@interface UIBarButtonItem (SynthEvents)
-(id)scriptingID;
@end

@interface UIBarButtonItem (Static)
+(Class)classForNavigationButton;
-(void)_getSystemItemStyle:(int*)style title:(id*)title image:(id*)image selectedImage:(id*)image4 action:(SEL*)action forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;
-(void)_getNavBarEdgeSizeAdjust:(CGSize*)adjust imageInsets:(UIEdgeInsets*)insets landscape:(BOOL)landscape;
-(void)_getToolbarEdgeInsets:(UIEdgeInsets*)insets imageInsets:(UIEdgeInsets*)insets2 glowInsets:(UIEdgeInsets*)insets3 forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;
-(id)createViewForNavigationItem:(id)navigationItem;
-(id)createViewForToolbar:(id)toolbar;
-(void)_updateView;
@end

@interface UIBarButtonItem (Internal)
@property(readonly, assign, nonatomic) int systemItem;
@property(readonly, assign, nonatomic) BOOL isSystemItem;
@property(readonly, assign, nonatomic) BOOL isCustomViewItem;
@property(retain, nonatomic) UIView* view;
-(id)nextResponder;
-(BOOL)isMinibarView;
-(void)setIsMinibarView:(BOOL)view;
-(void)_sendAction:(id)action withEvent:(id)event;
@end

@interface UIBarButtonItem (UIBarButtonItemPrivate)
@property(readonly, assign, nonatomic) UIToolbarButton* _toolbarButton;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@end

