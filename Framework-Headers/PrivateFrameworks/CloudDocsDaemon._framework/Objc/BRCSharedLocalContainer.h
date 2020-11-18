//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalContainer.h>

@class BRCSharedServerZone, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharedLocalContainer : BRCLocalContainer
{
    NSString *_ownerName;
}

@property (readonly, nonatomic) BOOL isPrivateContainer;
@property (readonly, nonatomic) BOOL isSharedContainer;
@property (readonly, nonatomic) BRCSharedServerZone *sharedZone;

- (void).cxx_destruct;
- (void)_setup;
- (id)asSharedContainer;
- (id)initForCreationWithContainerID:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 db:(id)arg4 session:(id)arg5;
- (id)initWithPlist:(id)arg1 containerID:(id)arg2 ownerName:(id)arg3 dbRowID:(id)arg4 db:(id)arg5 session:(id)arg6;
- (id)ownerName;
- (id)pathRelativeToRoot;
- (void)setServerZone:(id)arg1;

@end

