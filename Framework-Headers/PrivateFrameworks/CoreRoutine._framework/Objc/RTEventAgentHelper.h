//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RTEventAgentHelper : NSObject
{
    NSString *_restorationIdentifier;
}

@property (strong, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;

+ (BOOL)launchdManaged;
+ (id)signingIdentifierFromSelf;
- (void).cxx_destruct;
- (id)initWithRestorationIdentifier:(id)arg1;

@end
