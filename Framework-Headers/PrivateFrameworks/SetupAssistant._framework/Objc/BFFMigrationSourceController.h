//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BYMigrationSourceController;

@interface BFFMigrationSourceController : NSObject
{
    CDUnknownBlockType _dismissHandler;
    BYMigrationSourceController *_sourceController;
}

@property (copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property (strong, nonatomic) BYMigrationSourceController *sourceController; // @synthesize sourceController=_sourceController;

- (void).cxx_destruct;
- (id)initWithFileTransferSession:(id)arg1;
- (id)initialViewController;
- (void)setFileTransferSession:(id)arg1;

@end
