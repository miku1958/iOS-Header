//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SPSearchResult, SPSearchResultSection, SPUISearchResultsActionManager;

@interface SPUISearchResultsAction : NSObject
{
    BOOL _sendDestinationEngagementFeedback;
    SPSearchResult *_result;
    SPSearchResultSection *_section;
    NSArray *_urls;
    NSString *_cardTypeForFeedback;
    SPUISearchResultsActionManager *_actionManager;
}

@property (nonatomic) SPUISearchResultsActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property (strong) NSString *cardTypeForFeedback; // @synthesize cardTypeForFeedback=_cardTypeForFeedback;
@property (readonly) SPSearchResult *result; // @synthesize result=_result;
@property (readonly) SPSearchResultSection *section; // @synthesize section=_section;
@property BOOL sendDestinationEngagementFeedback; // @synthesize sendDestinationEngagementFeedback=_sendDestinationEngagementFeedback;
@property (strong, nonatomic) NSArray *urls; // @synthesize urls=_urls;

+ (id)actionForResult:(id)arg1 inSection:(id)arg2;
- (void).cxx_destruct;
- (void)cancelAnimated:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)performWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

