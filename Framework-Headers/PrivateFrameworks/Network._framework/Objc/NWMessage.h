//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data, OS_nw_content_context;

@interface NWMessage : NSObject
{
    NSObject<OS_dispatch_data> *_internalContent;
    NSObject<OS_nw_content_context> *_internalContext;
}

@property (strong, nonatomic) NSObject<OS_dispatch_data> *internalContent; // @synthesize internalContent=_internalContent;
@property (strong, nonatomic) NSObject<OS_nw_content_context> *internalContext; // @synthesize internalContext=_internalContext;

- (void).cxx_destruct;
- (id)initWithContent:(id)arg1 context:(id)arg2;

@end
