/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardLayout.h"
#import "UIKit-Structs.h"

@class NSString, UIKBKeyplaneView, UIKBKey, NSMutableArray, NSMutableDictionary, UIKBKeyboard, UIKBKeyplane, NSMutableSet, NSTimer;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutStar : UIKeyboardLayout {
@private
	UIKBKeyboard* m_keyboard;
	UIKBKeyplane* m_keyplane;
	NSString* m_keyboardName;
	NSString* m_keyplaneName;
	int m_appearance;
	UIKBKey* m_activeKey;
	CGPoint m_dragPoint;
	UIKBKeyplaneView* m_keyplaneView;
	int m_keyboardType;
	NSMutableDictionary* m_keyboards;
	NSMutableDictionary* m_states;
	NSMutableDictionary* m_allKeys;
	NSMutableDictionary* m_renderedKeys;
	NSMutableDictionary* m_allKeyplaneViews;
	NSMutableSet* m_variantKeyTokens;
	NSString* m_localizedInputMode;
	NSMutableArray* m_keyIndexMap;
	NSMutableDictionary* m_activatedKeys;
	NSTimer* m_activatedTimer;
	int m_preferredTrackingChangeCount;
	USet* m_accentInfo;
	USet* m_hasAccents;
	id m_spaceTarget;
	SEL m_spaceAction;
	SEL m_spaceLongAction;
	id m_returnTarget;
	SEL m_returnAction;
	SEL m_returnLongAction;
	id m_deleteTarget;
	SEL m_deleteAction;
	SEL m_deleteLongAction;
	BOOL m_secureTextEntry;
	BOOL m_shift;
	BOOL m_settingShift;
	BOOL m_didLongPress;
	BOOL m_dragged;
	BOOL m_dragChangedKey;
	BOOL m_touchDownInMoreKey;
}
@property(readonly, assign, nonatomic) UIKBKeyboard* keyboard;
@property(readonly, assign, nonatomic) UIKBKeyplane* keyplane;
@property(copy, nonatomic) NSString* keyboardName;
@property(copy, nonatomic) NSString* keyplaneName;
@property(retain, nonatomic) UIKBKey* activeKey;
@property(assign, nonatomic) BOOL shift;
@property(assign, nonatomic) BOOL didLongPress;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setKeyboardName:(id)name appearance:(int)appearance;
-(void)setReturnKeyType:(int)type;
-(void)setCurrencyKeysForCurrentLocale:(id)currentLocale;
-(int)displayTypeHintForMoreKey;
-(int)displayTypeHintForShiftKey;
-(void)updateMoreAndInternationalKeys;
-(void)setState:(int)state forKey:(id)key;
-(void)addKeyToActivatedSet:(id)activatedSet;
-(void)removeKeyFromActivatedSet:(id)activatedSet;
-(void)schedulePeriodicProcessActivatedSet;
-(void)cancelPeriodicProcessActivatedSet;
-(void)periodicProcessActivatedSet:(id)set;
-(void)deactivateAllInActivatedSet;
-(id)cacheIdentifierForState:(int)state ofKey:(id)key;
-(id)cacheIdentifierForKeyplaneNamed:(id)keyplaneNamed withVisualStyle:(id)visualStyle;
-(void)showKeyboardType:(int)type appearance:(int)appearance orientation:(id)orientation;
-(void)deactivateActiveKeys;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(id)keyHitTestContainingPoint:(CGPoint)point;
-(id)keyHitTestClosestToPoint:(CGPoint)point;
-(id)keyHitTestWithoutCharging:(CGPoint)charging;
-(id)keyHitTest:(CGPoint)test;
-(id)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withPathInfo:(XXStruct__FxRIA*)pathInfo;
-(void)sendStringAction:(id)action forKey:(id)key;
-(void)deleteAction;
-(void)setLabel:(id)label forKey:(id)key;
-(void)setTarget:(id)target forKey:(id)key;
-(void)setAction:(SEL)action forKey:(id)key;
-(void)setLongPressAction:(SEL)action forKey:(id)key;
-(void)restoreDefaultsForKey:(id)key;
-(void)restoreDefaultsForAllKeys;
-(void)nextCandidatesAction;
-(void)confirmAction;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)isLongPressedKey:(id)key;
-(void)longPressAction;
-(void)showPopupVariantsForKey:(id)key;
-(void)touchDown:(GSEventRef)down withPathInfo:(XXStruct__FxRIA*)pathInfo;
-(void)touchDownWithKey:(id)key atPoint:(CGPoint)point;
-(void)touchDragged:(GSEventRef)dragged withPathInfo:(XXStruct__FxRIA*)pathInfo;
-(void)touchUp:(GSEventRef)up withPathInfo:(XXStruct__FxRIA*)pathInfo;
-(BOOL)keyHasAccentedVariants:(id)variants;
-(unsigned)downActionFlagsForKey:(id)key;
-(unsigned)upActionFlagsForKey:(id)key;
-(void)updateReturnKey;
-(BOOL)usesAutoShift;
-(BOOL)isShiftKeyBeingHeld;
-(void)updateKeyCentroids:(BOOL)centroids;
-(void)didRotate;
-(id)scriptingInfoWithChildren;
@end

