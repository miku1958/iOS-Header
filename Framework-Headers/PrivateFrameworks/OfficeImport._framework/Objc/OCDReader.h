//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSString;
@protocol OCDReaderDelegate, TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface OCDReader : NSObject
{
    id<TCCancelDelegate> mCancelDelegate;
    BOOL mIsThumbnail;
    NSString *mFileName;
    NSData *mData;
    NSError *mStartError;
    id<OCDReaderDelegate> _delegate;
}

@property (strong, nonatomic) id<TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
@property (strong, nonatomic) NSData *data; // @synthesize data=mData;
@property (weak, nonatomic) id<OCDReaderDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *fileName; // @synthesize fileName=mFileName;
@property (nonatomic) BOOL isThumbnail; // @synthesize isThumbnail=mIsThumbnail;
@property (strong, nonatomic) NSError *startError; // @synthesize startError=mStartError;

- (void).cxx_destruct;
- (id)initWithCancelDelegate:(id)arg1;
- (BOOL)isBinaryReader;
- (id)read;
- (void)setStartErrorMessageFromException:(id)arg1;
- (BOOL)start;
- (BOOL)verifyFileFormat;

@end

