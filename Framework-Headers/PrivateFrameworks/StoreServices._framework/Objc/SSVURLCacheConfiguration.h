//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSVURLCacheConfiguration : NSObject
{
    BOOL _supportsProcessSharing;
    NSString *_sessionIdentifier;
}

@property (copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (nonatomic) BOOL supportsProcessSharing; // @synthesize supportsProcessSharing=_supportsProcessSharing;

- (void).cxx_destruct;

@end
