//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeBasicBlock : RWIProtocolJSONObject
{
}

@property (nonatomic) int endOffset;
@property (nonatomic) BOOL hasExecuted;
@property (nonatomic) int startOffset;

- (id)initWithStartOffset:(int)arg1 endOffset:(int)arg2 hasExecuted:(BOOL)arg3;

@end

