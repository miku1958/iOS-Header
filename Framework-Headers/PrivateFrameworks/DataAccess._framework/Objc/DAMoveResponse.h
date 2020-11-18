//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DAMessageMoveRequest, NSString;

@interface DAMoveResponse : NSObject
{
    int _status;
    NSString *_sourceID;
    NSString *_destID;
    DAMessageMoveRequest *_origRequest;
}

@property (copy, nonatomic) NSString *destID; // @synthesize destID=_destID;
@property (strong, nonatomic) DAMessageMoveRequest *origRequest; // @synthesize origRequest=_origRequest;
@property (copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property (nonatomic) int status; // @synthesize status=_status;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStatus:(int)arg1 sourceID:(id)arg2 destID:(id)arg3;

@end

