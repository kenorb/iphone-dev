/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSConditionLock, NSMutableArray;

@interface InvocationQueue : NSObject
{
    NSMutableArray *_items;
    unsigned int _maxThreads:16;
    unsigned int _numThreads:16;
    double _threadRecycleTimeout;
    NSConditionLock *_threadRecycleLock;
}

+ (void)initialize;	// IMP=0x30b9518d
- (void)_drainQueue;	// IMP=0x30b952ad
- (void)addInvocation:(id)fp8;	// IMP=0x30b955c1
- (void)dealloc;	// IMP=0x30b95231
- (void)didCancel:(id)fp8;	// IMP=0x30b957e9
- (id)init;	// IMP=0x30b951cd
- (unsigned int)invocationCount;	// IMP=0x30b95901
- (unsigned int)maxThreadCount;	// IMP=0x30b9522d
- (void)removeAllItems;	// IMP=0x30b95275
- (void)setMaxThreadCount:(unsigned int)fp8;	// IMP=0x30b95229
- (void)setThreadRecycleTimeout:(double)fp8;	// IMP=0x30b9595d
- (double)threadRecycleTimeout;	// IMP=0x30b9598d

@end
