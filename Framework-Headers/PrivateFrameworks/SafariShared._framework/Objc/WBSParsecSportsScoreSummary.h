//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSArray, NSString;

@interface WBSParsecSportsScoreSummary : WBSParsecModel
{
    NSArray *_images;
    NSString *_subtitle;
}

@property (readonly, copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property (readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;

+ (id)schema;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

