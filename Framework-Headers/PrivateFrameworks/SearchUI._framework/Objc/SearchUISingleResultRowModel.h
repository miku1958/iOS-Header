//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/SearchUIRowModel-Protocol.h>

@class NSString, SFSearchResult;

@interface SearchUISingleResultRowModel : NSObject <SearchUIRowModel>
{
    SFSearchResult *_result;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) SFSearchResult *result; // @synthesize result=_result;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cardSection;
- (id)descriptionText;
- (id)dragAppBundleID;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)dragURL;
- (id)identifyingResult;
- (id)initWithResult:(id)arg1;
- (BOOL)isCalculation;
- (BOOL)isContact;
- (BOOL)isDraggable;
- (BOOL)isSuggestion;
- (BOOL)isTappable;
- (double)leadingSeparatorImageInset;
- (id)nextCard;
- (id)punchouts;
- (id)reuseIdentifier;
- (int)separatorStyle;
- (Class)viewClass;

@end

