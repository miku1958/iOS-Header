//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASFolderLocalUpdateTask.h>

@interface ASFolderCreateTask : ASFolderLocalUpdateTask
{
}

- (void)_appendRequestBodyFolderDataToWBXMLData:(id)arg1;
- (id)initWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (long long)taskStatusForExchangeStatus:(int)arg1;

@end

