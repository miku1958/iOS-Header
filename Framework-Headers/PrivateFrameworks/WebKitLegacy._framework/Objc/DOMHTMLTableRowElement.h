//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLTableRowElement : DOMHTMLElement
{
}

@property (copy) NSString *align;
@property (copy) NSString *bgColor;
@property (readonly) DOMHTMLCollection *cells;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property (readonly) int rowIndex;
@property (readonly) int sectionRowIndex;
@property (copy) NSString *vAlign;

- (void)deleteCell:(int)arg1;
- (id)insertCell:(int)arg1;

@end

