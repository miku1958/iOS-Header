//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/SearchUIRowModel-Protocol.h>

@class NSArray, NSString;

@interface SearchUIMultiResultRowModel : NSObject <SearchUIRowModel>
{
    NSArray *_results;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSArray *results; // @synthesize results=_results;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cardSection;
- (id)dragAppBundleID;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)dragURL;
- (id)identifyingResult;
- (id)initWithResults:(id)arg1;
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
