//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _SYDeferredIncomingSession : NSObject
{
    NSURL *_resourceURL;
    NSString *_identifier;
    NSDictionary *_metadata;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (copy, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;

- (void).cxx_destruct;

@end

