/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIKeyboardReturnKeyView, UIImageView, UIKeyboardSpaceKeyView, NSMutableDictionary, UIClippedImageView, NSMutableArray;

@interface UIKeyboardSublayout : UIView {
	UIImageView* m_imageView;
	UIClippedImageView* m_activeImageView;
	UIImageView* m_shiftImageView;
	UIClippedImageView* m_shiftActiveImageView;
	UIImageView* m_shiftButtonImageView;
	UIImageView* m_shiftButtonInactiveImageView;
	UIImageView* m_autoShiftButtonImageView;
	UIImageView* m_shiftLockedButtonImageView;
	NSMutableDictionary* m_compositeImages;
	NSMutableDictionary* m_activeKeyViews;
	UIImageView* m_intlMoreImageView;
	UIImageView* m_intlSwitchImageView;
	UIImageView* m_intlSwitchActiveImageView;
	UIImageView* m_nonIntlMoreImageView;
	UIImageView* m_deleteImageView;
	UIImageView* m_deleteActiveImageView;
	UIKeyboardSpaceKeyView* m_spaceKeyView;
	UIKeyboardReturnKeyView* m_returnKeyView;
	NSMutableArray* m_extraImageViews;
	XXStruct_MMLx8B* m_keys;
	unsigned m_keysCount;
	CFDictionaryRef m_replacementKeys;
	NSMutableDictionary* m_replacementImageViews;
	BOOL m_usesAutoShift;
	BOOL m_isShiftKeyPlaneChooser;
	BOOL m_registersKeyCentroids;
	BOOL m_usesKeyCharges;
	BOOL m_internationalKeyIsActivated;
}
+(id)sublayoutWithFrame:(CGRect)frame imagePaths:(id)paths keys:(const XXStruct_K4qLnD*)keys keysCount:(unsigned)count;
+(id)compositedSublayoutWithFrame:(CGRect)frame compositeImagePaths:(id)paths keys:(const XXStruct_K4qLnD*)keys keysCount:(unsigned)count;
-(id)initWithFrame:(CGRect)frame imagePaths:(id)paths keys:(const XXStruct_K4qLnD*)keys keysCount:(unsigned)count;
-(id)initWithFrame:(CGRect)frame compositeImagePaths:(id)paths keys:(const XXStruct_K4qLnD*)keys keysCount:(unsigned)count;
-(void)dealloc;
-(void)setUsesAutoShift:(BOOL)shift;
-(BOOL)usesAutoShift;
-(void)setIsShiftKeyPlaneChooser:(BOOL)chooser;
-(BOOL)isShiftKeyPlaneChooser;
-(void)registerKeyAreaZephyr:(CGPoint)zephyr keyRect:(CGRect)rect keyCode:(int)code keyString:(id)string keyShiftString:(id)string5;
-(void)registerKeyCentroids;
-(void)setRegistersKeyCentroids:(BOOL)centroids;
-(BOOL)usesKeyCharges;
-(void)setUsesKeyCharges:(BOOL)charges;
-(void)setShiftButtonImage:(id)image frame:(CGRect)frame;
-(void)setShiftInactiveButtonImage:(id)image frame:(CGRect)frame;
-(void)setAutoShiftButtonImage:(id)image frame:(CGRect)frame;
-(void)setShiftLockedButtonImage:(id)image frame:(CGRect)frame;
-(void)setDeleteButtonImage:(id)image frame:(CGRect)frame;
-(void)setDeleteActiveButtonImage:(id)image frame:(CGRect)frame;
-(void)setCompositeImage:(id)image forKey:(id)key;
-(id)compositeImageForKey:(id)key;
-(void)addReplacementKeyboardKey:(XXStruct_K4qLnD*)key forKey:(id)key2;
-(void)addReplacementImageView:(id)view inputMode:(id)mode shift:(BOOL)shift;
-(void)addExtraImageView:(id)view;
-(void)addPartialLayoutViewWithFrame:(CGRect)frame imageName:(id)name visibleOrigin:(CGPoint)origin;
-(void)addSpaceKeyViewIfNeeded;
-(void)addSpaceKeyViewIfNeeded:(id)needed;
-(id)createSpaceKeyViewWithFrame:(CGRect)frame orientation:(int)orientation style:(int)style;
-(void)setSpaceKeyView:(id)view;
-(void)addReturnKeyViewIfNeeded;
-(void)addReturnKeyViewIfNeeded:(id)needed;
-(id)createReturnKeyViewWithFrame:(CGRect)frame orientation:(int)orientation style:(int)style;
-(void)setReturnKeyView:(id)view;
-(id)internationalImageName:(int)name forKeyboard:(id)keyboard orientation:(int)orientation;
-(void)addInternationalKeyIfNeeded:(id)needed;
-(BOOL)hitInternationalKey:(CGPoint)key;
-(void)activateInternationalKey;
-(BOOL)internationalKeyIsActivated;
-(void)deactivateInternationalKey;
-(void)bringKeySubviewsToFront;
-(id)scriptingInfoWithChildren;
@end

