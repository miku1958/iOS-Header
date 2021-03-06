//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface _EARSpeechModelInfo : NSObject
{
    struct SpeechModelInfo _speechModelInfo;
}

@property (readonly, nonatomic) NSString *acousticProfileVersion;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *phoneSetVersion;
@property (readonly, nonatomic) NSSet *samplingRates;
@property (readonly, nonatomic) NSSet *tasks;
@property (readonly, nonatomic) NSString *version;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1;

@end

