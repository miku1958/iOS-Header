//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, USKObjectPath, USKToken;

@interface USKObject : NSObject
{
    USKToken *_name;
    USKObjectPath *_path;
}

@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, strong, nonatomic) USKToken *name; // @synthesize name=_name;
@property (readonly, strong, nonatomic) USKObjectPath *path; // @synthesize path=_path;

- (void).cxx_destruct;

@end
