//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PromotedContent/APPCPromotableDesiredPlacement-Protocol.h>

@class MISSING_TYPE;

@interface APPCDesiredPlacement : NSObject <APPCPromotableDesiredPlacement>
{
    MISSING_TYPE *type;
    MISSING_TYPE *count;
}

@property (nonatomic, readonly) long long count; // @synthesize count;
@property (nonatomic, readonly) long long type; // @synthesize type;

- (id)init;
- (id)initWithType:(long long)arg1 count:(long long)arg2;

@end

