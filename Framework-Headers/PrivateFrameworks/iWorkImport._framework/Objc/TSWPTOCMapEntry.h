//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPTOCEntryStyle;

__attribute__((visibility("hidden")))
@interface TSWPTOCMapEntry : NSObject
{
    BOOL _showInTOC;
    TSWPTOCEntryStyle *_tocEntryStyle;
}

@property (nonatomic) BOOL showInTOC; // @synthesize showInTOC=_showInTOC;
@property (strong, nonatomic) TSWPTOCEntryStyle *tocEntryStyle; // @synthesize tocEntryStyle=_tocEntryStyle;

- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)initWithTOCEntryStyle:(id)arg1 showInTOC:(BOOL)arg2;

@end
