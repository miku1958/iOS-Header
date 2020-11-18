//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaOffer : NSObject
{
    BOOL _hasAudio;
    BOOL _hasVideo;
    BOOL _isEVOD;
    NSURL *_previewURL;
    NSString *_type;
}

@property (readonly, nonatomic) BOOL hasAudio; // @synthesize hasAudio=_hasAudio;
@property (readonly, nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property (readonly, nonatomic) BOOL isEVOD; // @synthesize isEVOD=_isEVOD;
@property (readonly, copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property (readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;

+ (BOOL)hasAudioForOffer:(id)arg1;
+ (BOOL)hasVideoForOffer:(id)arg1;
+ (BOOL)isEVODForOffer:(id)arg1;
+ (id)previewURLForOffer:(id)arg1;
+ (id)typeForOffer:(id)arg1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
