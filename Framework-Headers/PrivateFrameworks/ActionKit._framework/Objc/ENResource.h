//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface ENResource : NSObject
{
    NSData *_data;
    NSString *_mimeType;
    NSString *_filename;
    NSString *_sourceUrl;
    NSData *_dataHash;
    NSDictionary *_edamAttributes;
    NSString *_guid;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (strong, nonatomic) NSData *dataHash; // @synthesize dataHash=_dataHash;
@property (strong, nonatomic) NSDictionary *edamAttributes; // @synthesize edamAttributes=_edamAttributes;
@property (copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (readonly, nonatomic) NSString *mediaTag;
@property (copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property (copy, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;

+ (id)resourceWithServiceResource:(id)arg1;
- (void).cxx_destruct;
- (id)EDAMResource;
- (id)initWithData:(id)arg1 mimeType:(id)arg2;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 filename:(id)arg3;

@end

