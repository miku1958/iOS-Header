//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface BRCDatabaseRestoreManager : NSObject
{
    NSURL *_userURL;
    NSURL *_clientDatabaseURL;
}

@property (strong, nonatomic) NSURL *clientDatabaseURL; // @synthesize clientDatabaseURL=_clientDatabaseURL;
@property (strong, nonatomic) NSURL *userURL; // @synthesize userURL=_userURL;

- (void).cxx_destruct;
- (id)initWithUserURL:(id)arg1;
- (void)restoreWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

