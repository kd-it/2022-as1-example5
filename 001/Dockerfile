# 例題1 CMDとENTRYPOINT

FROM ubuntu:22.04
RUN apt-get update; \
    apt-get install -y gcc make
WORKDIR /work
ADD code /work
RUN make; make install
# おたのしみポイント
ENTRYPOINT [ "hello" ]
