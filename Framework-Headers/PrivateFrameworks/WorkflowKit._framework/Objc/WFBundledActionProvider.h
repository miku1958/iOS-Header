//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionProvider.h>

@interface WFBundledActionProvider : WFActionProvider
{
}

- (id)actionDefinitionsWithIdentifiers:(id)arg1;
- (id)availableActionIdentifiers;
- (id)bundledURL;
- (id)cacheDirectoryURL;
- (id)cacheURL;
- (void)createActionsForRequests:(id)arg1;
- (id)createAllAvailableActions;
- (id)currentVersion;
- (void)deleteCache;
- (void)updateCache:(CDUnknownBlockType)arg1;

@end
