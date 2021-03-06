//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/NSCopying-Protocol.h>

@class FBSystemShellInitializationOptions;

@interface FBSystemShellInitializationContext : NSObject <NSCopying>
{
    FBSystemShellInitializationOptions *_options;
    BOOL _bootedDark;
}

@property (readonly, nonatomic, getter=wasBootedDark) BOOL bootedDark;
@property (readonly, nonatomic) unsigned long long lastExitReason;
@property (readonly, nonatomic) FBSystemShellInitializationOptions *options; // @synthesize options=_options;

- (void).cxx_destruct;
- (id)_initWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

