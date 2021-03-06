//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCHeadlineExperimentalTitleProvider : NSObject
{
    BOOL _shouldShowAlternateHeadlines;
    NSString *_feldsparID;
}

@property (readonly, copy, nonatomic) NSString *feldsparID; // @synthesize feldsparID=_feldsparID;
@property (nonatomic) BOOL shouldShowAlternateHeadlines; // @synthesize shouldShowAlternateHeadlines=_shouldShowAlternateHeadlines;

+ (BOOL)isDebugModeEnabled;
- (void).cxx_destruct;
- (id)_debugHeadlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)_headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)initWithShouldShowAlternateHeadlines:(BOOL)arg1;
- (id)metadataForDefaultHeadlineWithTitle:(id)arg1;

@end

