//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVKeyPath-Protocol.h>
#import <AVFoundation/NSCopying-Protocol.h>

@class NSString;

@interface AVTwoPartKeyPath : NSObject <AVKeyPath, NSCopying>
{
    NSString *_topLevelKey;
    NSString *_secondLevelKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *keyPathString;
@property (readonly, nonatomic) NSString *secondLevelPropertyKey; // @synthesize secondLevelPropertyKey=_secondLevelKey;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *topLevelPropertyKey; // @synthesize topLevelPropertyKey=_topLevelKey;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTopLevelPropertyKey:(id)arg1 secondLevelPropertyKey:(id)arg2;

@end

