FROM ubuntu:22.04
ARG GOPKG="https://go.dev/dl/go1.18.3.linux-amd64.tar.gz"
RUN cd /usr/local; \
    apt-get update; apt-get install -y curl; \
    curl -sL ${GOPKG} | tar xz
ENV PATH=/usr/local/go/bin:$PATH
WORKDIR /work
ADD src /work/
RUN go build hello.go
ENTRYPOINT [ "/work/hello" ]
