//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSTTableHeaderStorage-Protocol.h>

@class NSString;

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage>
{
    struct map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
    double mHorizontalScaleFactor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalScaleFactor; // @synthesize horizontalScaleFactor=mHorizontalScaleFactor;
@property (readonly) Class superclass;

- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2 willModify:(BOOL)arg3;
- (long long)count;
- (void)dealloc;
- (unsigned long long)flushableSize;
- (id)headerForKey:(unsigned int)arg1 willModify:(BOOL)arg2;
- (id)headerForKey:(unsigned int)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3;
- (id)initWithContext:(id)arg1;
- (unsigned int)lowerBound:(unsigned int)arg1;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(BOOL)arg2;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (id)packageLocator;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(id)arg1 forKey:(unsigned int)arg2;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (unsigned int)upperBound:(unsigned int)arg1;

@end

