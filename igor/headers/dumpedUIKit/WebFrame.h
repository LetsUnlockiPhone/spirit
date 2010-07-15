/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <WebKit/WebFrame.h>


@interface WebFrame (BrowserAdditions)
-(BOOL)isMainFrame;
-(id)_topFrame;
-(void)_collectFormFieldElementsIntoArray:(id)array upToLimit:(unsigned)limit onlyIncludeFocusedElements:(BOOL)elements;
-(id)allFormFields;
-(BOOL)containsAnyFormFields;
-(BOOL)containsAnyFocusedFormFields;
-(BOOL)isOrphaned;
@end

@interface WebFrame (UIWebDocumentViewTextSelecting)
-(BOOL)isTexty;
@end

@interface WebFrame (UIWebSelectionAdditions)
-(id)viewForCoordinateTransforms;
-(BOOL)containsOnlySelectableElements;
@end

