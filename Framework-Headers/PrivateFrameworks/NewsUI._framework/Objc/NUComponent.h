//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUComponent-Protocol.h>

@class NSString;
@protocol NUNode, NUSizer;

@interface NUComponent : NSObject <NUComponent>
{
    id<NUNode> _node;
    id<NUSizer> _sizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<NUNode> node; // @synthesize node=_node;
@property (readonly, nonatomic) id<NUSizer> sizer; // @synthesize sizer=_sizer;
@property (readonly) Class superclass;

+ (id)componentWithSizer:(id)arg1 node:(id)arg2;
- (void).cxx_destruct;
- (id)initWithSizer:(id)arg1 node:(id)arg2;

@end
