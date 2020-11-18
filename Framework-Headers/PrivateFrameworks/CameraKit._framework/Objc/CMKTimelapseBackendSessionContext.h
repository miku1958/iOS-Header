//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMKTimelapseState, NSArray, NSString;

@interface CMKTimelapseBackendSessionContext : NSObject
{
    NSString *_timelapseUUID;
    CMKTimelapseState *_state;
    NSArray *_filesToDelete;
    NSArray *_filesToWrite;
}

@property (strong, nonatomic) NSArray *filesToDelete; // @synthesize filesToDelete=_filesToDelete;
@property (strong, nonatomic) NSArray *filesToWrite; // @synthesize filesToWrite=_filesToWrite;
@property (strong, nonatomic) CMKTimelapseState *state; // @synthesize state=_state;
@property (readonly, nonatomic) NSString *timelapseUUID; // @synthesize timelapseUUID=_timelapseUUID;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithTimelapseUUID:(id)arg1;

@end
