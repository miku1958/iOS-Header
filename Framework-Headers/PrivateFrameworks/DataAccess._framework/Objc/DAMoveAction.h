//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAAction.h>

@class NSString;

@interface DAMoveAction : DAAction
{
    NSString *_sourceContainerId;
    NSString *_sourceServerId;
    NSString *_destinationContainerId;
}

@property (strong, nonatomic) NSString *destinationContainerId; // @synthesize destinationContainerId=_destinationContainerId;
@property (strong, nonatomic) NSString *sourceContainerId; // @synthesize sourceContainerId=_sourceContainerId;
@property (strong, nonatomic) NSString *sourceServerId; // @synthesize sourceServerId=_sourceServerId;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5;

@end

