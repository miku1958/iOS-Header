//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPSource-Protocol.h>

@class NSString;
@protocol HDSPSource;

__attribute__((visibility("hidden")))
@interface _HDSPQuietSource : NSObject <HDSPSource>
{
    BOOL _dontNotify;
    BOOL _dontSync;
    NSString *_sourceIdentifier;
    id<HDSPSource> _targetSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dontNotify; // @synthesize dontNotify=_dontNotify;
@property (nonatomic) BOOL dontSync; // @synthesize dontSync=_dontSync;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<HDSPSource> targetSource; // @synthesize targetSource=_targetSource;

- (void).cxx_destruct;

@end
