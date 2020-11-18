//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CSLFeature.h>

@class NSNumber, NSString;

@interface CSLNGramFeature : CSLFeature
{
    BOOL _isStopWord;
    NSString *_token;
    NSNumber *_position;
    NSNumber *_size;
    NSString *_originalForm;
}

@property BOOL isStopWord; // @synthesize isStopWord=_isStopWord;
@property (strong, nonatomic) NSString *originalForm; // @synthesize originalForm=_originalForm;
@property (strong, nonatomic) NSNumber *position; // @synthesize position=_position;
@property (strong, nonatomic) NSNumber *size; // @synthesize size=_size;
@property (strong, nonatomic) NSString *token; // @synthesize token=_token;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithKey:(id)arg1 fromSource:(id)arg2 withWeight:(double)arg3 token:(id)arg4 position:(id)arg5 size:(id)arg6 originalForm:(id)arg7 isStopWord:(BOOL)arg8;

@end

