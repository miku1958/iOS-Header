//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString;

@interface IMXMLReparserContext : NSObject
{
    NSString *_inContent;
    NSString *_outContent;
    NSDictionary *_attributesToMerge;
    NSError *_error;
    NSArray *_attributesToPreserve;
}

@property (readonly, strong) NSString *_inContent; // @synthesize _inContent;
@property (readonly, strong, nonatomic) NSDictionary *attributesToMerge; // @synthesize attributesToMerge=_attributesToMerge;
@property (readonly, strong, nonatomic) NSArray *attributesToPreserve; // @synthesize attributesToPreserve=_attributesToPreserve;
@property (readonly, strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, copy, nonatomic) NSString *outContent; // @synthesize outContent=_outContent;

- (void)_setOutContent:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3;

@end

