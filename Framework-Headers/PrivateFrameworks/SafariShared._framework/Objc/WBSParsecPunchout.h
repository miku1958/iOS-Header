//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSString, NSURL;

@interface WBSParsecPunchout : WBSParsecModel
{
    NSString *_name;
    NSString *_bundleID;
    NSString *_punchoutLabel;
    NSURL *_punchoutURL;
    NSURL *_installURL;
}

@property (readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, nonatomic) NSURL *installURL; // @synthesize installURL=_installURL;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) NSString *punchoutLabel; // @synthesize punchoutLabel=_punchoutLabel;
@property (readonly, nonatomic) NSURL *punchoutURL; // @synthesize punchoutURL=_punchoutURL;

+ (id)schema;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

