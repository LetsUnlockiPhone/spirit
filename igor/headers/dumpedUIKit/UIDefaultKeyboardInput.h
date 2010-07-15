/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardInput.h"
#import "UIView.h"

@class UITextInputTraits, UITextInteractionAssistant, UITextSelectionView, UIColor;
@protocol UITextSelectingContent;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput> {
	UITextInputTraits* m_traits;
}
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;
@property(retain, nonatomic) UIColor* insertionPointColor;
@property(assign, nonatomic) unsigned insertionPointWidth;
@property(assign, nonatomic) int textLoupeVisibility;
@property(assign, nonatomic) int textSelectionBehavior;
@property(assign, nonatomic) id textSuggestionDelegate;
@property(assign, nonatomic) BOOL contentsIsSingleValue;
@property(assign, nonatomic) BOOL acceptsEmoji;
@property(readonly, assign, nonatomic) UITextSelectionView* selectionView;
@property(readonly, assign, nonatomic) UITextInteractionAssistant* interactionAssistant;
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent>* content;
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;
-(void)dealloc;
-(id)textInputTraits;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)takeTraitsFrom:(id)from;
-(id)delegate;
-(void)deleteBackward;
-(void)insertText:(id)text;
-(void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;
-(void)replaceCurrentWordWithText:(id)text;
-(void)replaceRangeWithTextWithoutClosingTyping:(NSRange)textWithoutClosingTyping replacementText:(id)text;
-(void)setMarkedText:(id)text selectedRange:(NSRange)range;
-(void)setMarkedText:(id)text;
-(void)confirmMarkedText:(id)text;
-(id)markedText;
-(unsigned short)characterInRelationToCaretSelection:(int)caretSelection;
-(unsigned short)characterBeforeCaretSelection;
-(unsigned short)characterAfterCaretSelection;
-(id)fontForCaretSelection;
-(id)textColorForCaretSelection;
-(CGRect)rectForNSRange:(NSRange)nsrange;
-(id)rectsForNSRange:(NSRange)nsrange;
-(CGRect)rectContainingCaretSelection;
-(id)wordRangeContainingCaretSelection;
-(BOOL)shouldEnableAutoShift;
-(id)wordContainingCaretSelection;
-(id)wordInRange:(id)range;
-(void)expandSelectionToStartOfWordContainingCaretSelection;
-(int)wordOffsetInRange:(id)range;
-(BOOL)hasContent;
-(BOOL)hasSelection;
-(int)selectionState;
-(BOOL)selectionAtDocumentStart;
-(BOOL)selectionAtSentenceStart;
-(BOOL)selectionAtWordStart;
-(NSRange)selectionRange;
-(NSRange)markedTextRange;
-(id)selectedDOMRange;
-(void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;
-(id)rangeByMovingCurrentSelection:(int)selection;
-(id)rangeByExtendingCurrentSelection:(int)selection;
-(void)extendCurrentSelection:(int)selection;
-(void)moveBackward:(unsigned)backward;
-(void)moveForward:(unsigned)forward;
-(void)selectAll;
-(void)setText:(id)text;
-(id)text;
-(void)setSelectionWithPoint:(CGPoint)point;
-(CGRect)caretRect;
-(CGRect)convertCaretRect:(CGRect)rect;
-(id)keyboardInputView;
-(BOOL)isShowingPlaceholder;
-(void)setupPlaceholderTextIfNeeded;
-(id)editingDelegate;
-(void)setEditingDelegate:(id)delegate;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)secure;
-(BOOL)isProxyFor:(id)aFor;
-(CGRect)selectionClipRect;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)updateSelection;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)gestures;
-(void)detachSelectionView;
-(void)detachInteractionAssistant;
-(CGRect)visibleBounds;
@end

