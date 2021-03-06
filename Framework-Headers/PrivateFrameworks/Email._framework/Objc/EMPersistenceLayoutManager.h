//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class NSString;

@interface EMPersistenceLayoutManager : NSObject <EFLoggable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_nonContainerizedBaseMailDirectoryPathCreated:(BOOL *)arg1;
+ (id)baseMailDirectory;
+ (id)baseMailDirectoryPath;
+ (id)log;
+ (id)mailAccountDirectory;
+ (id)mailAccountDirectoryPath;
+ (id)mailDataDirectory;
+ (id)mailDataDirectoryPath;

@end

