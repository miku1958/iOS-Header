//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@class RTLearnedPlace;

@interface RTLearnedPlaceVersions : NSObject <NSCopying>
{
    BOOL _isRotted;
    RTLearnedPlace *_inferredVersion;
    RTLearnedPlace *_existingVersion;
    RTLearnedPlace *_truthfulCounterpart;
}

@property (strong, nonatomic) RTLearnedPlace *existingVersion; // @synthesize existingVersion=_existingVersion;
@property (strong, nonatomic) RTLearnedPlace *inferredVersion; // @synthesize inferredVersion=_inferredVersion;
@property (nonatomic) BOOL isRotted; // @synthesize isRotted=_isRotted;
@property (strong, nonatomic) RTLearnedPlace *truthfulCounterpart; // @synthesize truthfulCounterpart=_truthfulCounterpart;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)trueVersion;

@end

